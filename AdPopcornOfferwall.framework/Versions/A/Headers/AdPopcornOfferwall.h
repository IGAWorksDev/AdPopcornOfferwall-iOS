//
//  AdPopcorn.h
//  IgaworksAd
//
//  Created by wonje,song on 2014. 3. 26..
//  Copyright (c) 2014년 wonje,song. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "APError.h"


@protocol AdPopcornOfferwallDelegate;
@protocol AdPopcornOfferwallClientRewardDelegate;

@interface AdPopcornOfferwall : NSObject
{

}


@property (nonatomic, weak) id<AdPopcornOfferwallDelegate> delegate;

@property (nonatomic, weak) id<AdPopcornOfferwallClientRewardDelegate> clientRewardDelegate;

/*!
 @abstract
 singleton AdPopcorn 객체를 반환한다.
 */
+ (AdPopcornOfferwall *)shared;

/*!
 @abstract
 Open offerwall.
 
 @discussion
 리스트 형태의 광고를 노출한다.
 
 @param vController          광고 리스트를 노출시킬 view controller
 @param delegate             AdPopcornDelegate
 @param userDataDictionaryForFilter    filtering(targeting)을 위한 user data
 */
+ (void)openOfferWallWithViewController:(UIViewController *)vController delegate:(id)delegate userDataDictionaryForFilter:(NSMutableDictionary *)userDataDictionaryForFilter;

 /*!
 @abstract
 IGAWorks에 리워드 지급이 필요한 정보가 있는지 확인 요청을 한다.
 
 @discussion
 일반적으로 자동으로 pending된 리워드 정보가 업데이트 되지만, 사용자가 직접 pending된 리워드가 있는지 수동으로 확인하기 위한 요청 API.
 
 */
+ (void)getClientPendingRewardItems;

/*!
 @abstract
 IGAWorks에 리워드 지급 확정 처리를 요청한다.
 
 @discussion
 이곳에서 사용자에게 리워드 지급 처리를 한다. 지급 처리가 완료 되었다면, 해당 메소드를 호출하여 IGAWorks에 리워드 지급 확정 처리를 요청한다.
 
 @param rewardKey 리워드 식별키
 */
+ (void)didGiveRewardItemWithRewardKey:(NSString *)rewardKey;


/*!
 @abstract
 loadVideoAd.
 
 @discussion
 비디오 광고를 요청한다.
 
 @param vController          비디오를 노출시킬 view controller
 @param delegate             AdPopcornDelegate
 */
+ (void)loadVideoAd:(id)delegate;
+ (void)showVideoAdWithViewController:(UIViewController *)vController delegate:(id)delegate;
@end


@protocol AdPopcornOfferwallDelegate <NSObject>

@optional

/*!
 @abstract
 offerwall 리스트가 열리기 전에 호출된다.
 
 @discussion
 */
- (void)willOpenOfferWall;

/*!
 @abstract
 offerwall 리스트가 열린직 후 호출된다.
 
 @discussion
 */
- (void)didOpenOfferWall;


/*!
 @abstract
 offerwall 리스트가 닫히기 전에 호출된다.
 
 @discussion
 */
- (void)willCloseOfferWall;

/*!
 @abstract
 offerwall 리스트가 닫힌직 후 호출된다.
 
 @discussion
 */
- (void)didCloseOfferWall;

/*!
 @abstract
 video 광고 로드에 성공한 경우 호출된다.
 @discussion
 */
- (void)loadVideoAdSuccess;

/*!
 @abstract
 video 광고 로드에 실패한 경우 호출된다.
 
 @discussion
 */
- (void)loadVideoAdFailedWithError:(APError *)error;

/*!
 @abstract
 video 광고가 열리기 전에 호출된다.
 
 @discussion
 */
- (void)willOpenVideoAd;

/*!
 @abstract
 video 광고가 열린직 후 호출된다.
 
 @discussion
 */
- (void)didOpenVideoAd;


/*!
 @abstract
 video 광고가 닫히기 전에 호출된다.
 
 @discussion
 */
- (void)willCloseVideoAd;

/*!
 @abstract
 video 광고가 닫힌직 후 호출된다.
 
 @discussion
 */
- (void)didCloseVideoAd;

/*!
 @abstract
 reward video 광고 참여 시도에 실패 했을때 호출된다.
 
 @discussion
 */
- (void)showVideoAdFailedWithError:(APError *)error;
@end

@protocol AdPopcornOfferwallClientRewardDelegate <NSObject>

@optional

/*!
 @abstract
 사용자에게 지급할 아이템이 있을때 호출된다.
 
 @discussion
 사용자에게 아이템을 지급하고, 지급이 완료되면 didGiveRewardItemWithRewardKey 메소드를 호출하여 지급 완료 확정 처리를 한다.
 */
- (void)onRewardRequestResult:(BOOL)isSuccess withMessage:(NSString *)message itemName:(NSString *)itemName itemKey:(NSString *)itemKey campaignName:(NSString *)campaignName campaignKey:(NSString *)campaignKey rewardKey:(NSString *)rewardKey quantity:(NSInteger)quantity;


/*!
 @abstract
 사용자에게 지급할 아이템이 있을때 호출된다. 아이템 리스트를 전달한다.
 
 @discussion
 사용자에게 아이템을 지급하고, 지급이 완료되면 didGiveRewardItemWithRewardKey 메소드를 호출하여 지급 완료 확정 처리를 한다.
 */
- (void)onRewardRequestResult:(BOOL)isSuccess withMessage:(NSString *)message items:(NSArray *)items;

/*!
 @abstract
 Reward 지급 확정 처리 콜백 메소드.
 
 @discussion
 didGiveRewardItemWithRewardKey 메소드에서 reward 지급 처리를 완료한 뒤에 IGAWorks에 요청한 결과가 이 곳으로 리턴된다. isSuccess가 YES가 리턴되어야 최종 reward 지급이 완료된다.
 */
- (void)onRewardCompleteResult:(BOOL)isSuccess withMessage:(NSString *)message resultCode:(NSInteger)resultCode withCompletedRewardKey:(NSString *)completedRewardKey;

@end
