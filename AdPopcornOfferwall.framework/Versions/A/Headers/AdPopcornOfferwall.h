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


@interface AdPopcornOfferwall : NSObject
{

}


@property (nonatomic, unsafe_unretained) id<AdPopcornOfferwallDelegate> delegate;

@property (nonatomic, unsafe_unretained) BOOL doNotShowContactUs;


typedef enum _VideoType
{
    AllVideoType,
    RewardVideoType,
    NonRewardVideoType
} VideoType;

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

+ (void)openPromotionEvent:(UIViewController *)vController delegate:(id)delegate;

/*!
 @abstract
 IGAWorks에 리워드 지급 확정 처리를 요청한다.
 
 @discussion
 이곳에서 사용자에게 리워드 지급 처리를 한다. 지급 처리가 완료 되었다면, 해당 메소드를 호출하여 IGAWorks에 리워드 지급 확정 처리를 요청한다.
 
 @param rewardKey            리워드 식별키
 */
+ (void)didGiveRewardItemWithRewardKey:(NSString *)rewardKey;

 /*!
 @abstract
 IGAWorks에 리워드 지급이 필요한 정보가 있는지 확인 요청을 한다.
 
 @discussion
 일반적으로 자동으로 pending된 리워드 정보가 업데이트 되지만, 사용자가 직접 pending된 리워드가 있는지 수동으로 확인하기 위한 요청 API.
 
 */
+ (void)getClientPendingRewardItems;

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
 promotion event가 열리기 전에 호출된다.
 
 @discussion
 */
- (void)willOpenPromotionEvent;

/*!
 @abstract
 promotion event가 열린직 후 호출된다.
 
 @discussion
 */
- (void)didOpenPromotionEvent;

/*!
 @abstract
 promotion event가 닫히기 전에 호출된다.
 
 @discussion
 */
- (void)willClosePromotionEvent;

/*!
 @abstract
 promotion event가 닫힌직 후 호출된다.
 
 @discussion
 */
- (void)didClosePromotionEvent;
   
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
