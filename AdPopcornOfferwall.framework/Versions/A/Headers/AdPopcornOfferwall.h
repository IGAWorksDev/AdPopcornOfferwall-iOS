//
//  AdPopcornOfferwall.h
//  AdPopcornOfferwallLib
//
//  Created by mick on 2018. 2. 26..
//  Copyright (c) 2018년 igaworks All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "APError.h"

@protocol AdPopcornOfferwallDelegate;
@protocol AdPopcornOfferwallClientRewardDelegate;

typedef enum _AdPopcornOfferwallLogLevel
{
    /*! log off  */
    AdPopcornOfferwallLogOff,
    /*! only critical logging  */
    AdPopcornOfferwallLogCritical,
    /*! critical, error logging  */
    AdPopcornOfferwallLogError,
    /*! critical, error, warning logging  */
    AdPopcornOfferwallLogWarning,
    /*! critical, error, warning, info logging  */
    AdPopcornOfferwallLogInfo,
    /*! critical, error, warning, info, debug logging  */
    AdPopcornOfferwallLogDebug,
    /*! all logging */
    AdPopcornOfferwallLogTrace
} AdPopcornOfferwallLogLevel;

@interface AdPopcornOfferwall : NSObject
{

}

@property (nonatomic, weak) id<AdPopcornOfferwallDelegate> delegate;

// igaworks에서 제공하는 reward server를 사용할것인지 여부.
@property (nonatomic, unsafe_unretained) BOOL useIgaworksRewardServer;
@property (nonatomic, weak) id<AdPopcornOfferwallClientRewardDelegate> clientRewardDelegate;

/*!
 @abstract
 singleton AdPopcorn 객체를 반환한다.
 */
+ (AdPopcornOfferwall *)shared;

/*!
 @abstract
 IGAWorks appkey, hashkey를 설정한다.
 
 @param appkey 앱키, hashkey 해시키
 */
+ (void)setAppKey:(NSString *)appKey andHashKey:(NSString *)hashKey;

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
 setUseClientRewardServer
 
 @discussion
 클라이언트 리워드 서버 사용 여부 설정
 */
+ (void)setUseClientRewardServer:(BOOL)useIgawClientRewardServer;

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

/*!
 @abstract
 사용자의 user id를 전송하고자 할때 호출한다.
 
 @param userId              user id.
 */
+ (void)setUserId:(NSString *)userId;

/*!
 @abstract
 로그를 level를 설정한다.
 
 @discussion
 보고자 하는 로그 level을 info, debug, trace으로 설정한다.
 
 @param LogLevel log level
 */
+ (void)setLogLevel:(AdPopcornOfferwallLogLevel)logLevel;

/*!
 @abstract
 적립 가능한 오퍼월 캠페인 수와 총 리워드 조회 API
 
 @discussion
 적립 가능한 오퍼월 캠페인 수와 총 리워드: 조회된 결과 값은 offerwallTotalRewardInfo 에서 확인 가능
 */
+ (void)getEarnableTotalRewardInfo:(id)delegate;

/*!
 @abstract
 수동으로 고객센터 open api
 
 @discussion
 오퍼월 접근을 통하지 않고 고객센터를 open 한다.
 */
+ (void)openCSViewController:(UIViewController *)vController userId:(NSString *)userId;

/*!
 @abstract
 캠페인 키를 이용 참여 시도 API
 
 @discussion
 캠페인 키를 이용 해 SDK에서 대신 참여 시도 처리
 */
+ (void)tryParticipateCampaign:(NSString *)campaignKey;
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

/*!
 @abstract
 조회된 오퍼월 캠페인 수와 총 리워드 정보를 전달한다.
 
 @discussion
 */
- (void)offerwallTotalRewardInfo:(BOOL)queryResult totalCount:(NSInteger)count
                      totalReward:(NSString *)reward;

/*!
 @abstract
 tryParticipateCampaign 결과 값을 전달한다.
 
 @discussion
 */
- (void)onParticipateResult:(BOOL)result resultCode:(NSInteger)resultCode
              resultMessage:(NSString *)resultMessage landingURL:(NSString*)landingURL;
@end

@protocol AdPopcornOfferwallClientRewardDelegate <NSObject>

@optional

/*!
 @abstract
 사용자에게 지급할 아이템이 있을때 호출된다.
 
 @discussion
 사용자에게 아이템을 지급하고, 지급이 완료되면 didGiveRewardItemWithRewardKey 메소드를 호출하여 지급 완료 확정 처리를 한다.
 */
//- (void)onRewardRequestResult:(BOOL)isSuccess withMessage:(NSString *)message itemName:(NSString *)itemName itemKey:(NSString *)itemKey campaignName:(NSString *)campaignName campaignKey:(NSString *)campaignKey rewardKey:(NSString *)rewardKey quantity:(NSInteger)quantity;
- (void)onRewardRequestResult:(BOOL)isSuccess withMessage:(NSString *)message campaignKey:(NSString *)campaignKey campaignName:(NSString *)campaignName quantity:(long)quantity cv:(NSString *)cv rewardKey:(NSString *)rewardKey;

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
