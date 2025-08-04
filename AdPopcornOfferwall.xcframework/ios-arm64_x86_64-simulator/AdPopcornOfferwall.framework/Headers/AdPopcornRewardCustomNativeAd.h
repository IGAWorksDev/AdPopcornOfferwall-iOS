//
//  AdPopcornRewardCustomNativeAd.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 2025/08/01.
//  Copyright © 2025 AdPopcorn. All rights reserved.
//

#ifndef AdPopcornRewardCustomNativeAd_h
#define AdPopcornRewardCustomNativeAd_h

#endif /* AdPopcornRewardCustomNativeAd_h */

#import <UIKit/UIKit.h>

@protocol AdPopcornRewardCustomNativeAdDelegate;
@interface AdPopcornRewardCustomNativeAd : NSObject
{

}

@property (nonatomic, weak) id<AdPopcornRewardCustomNativeAdDelegate> delegate;
@property (nonatomic, copy) NSString *placementId;
@property (nonatomic, weak) UIViewController *viewController;

- (instancetype)initWithViewController:(UIViewController *)viewController;
- (void)loadAd;
- (void)setPlacementId:(NSString *)placementId;
- (void)impressionCampaign:(NSString *)nativeCampaignId;
- (void)clickCampaign:(NSString *)nativeCampaignId;
@end

@protocol AdPopcornRewardCustomNativeAdDelegate <NSObject>
@optional
/*!
 @abstract
 광고 로딩 성공 시, 호출.
 */
- (void)ApCustomNativeLoadSuccess:(NSMutableArray *)campaignList;

/*!
 @abstract
 광고 로딩 실패 시, 호출.
 */
- (void)ApCustomNativeLoadFailed:(NSInteger)errorCode;

/*!
 @abstract
 광고 클릭 성공 시, 호출.
 */
- (void)ApCustomNativeClickSuccess;

/*!
 @abstract
 광고 클릭 실패, 타임아웃 등의 이슈 발생시 호출.
 */
- (void)ApCustomNativeFailedEvent:(NSInteger)errorCode;

/*!
 @abstract
 SDK 내부에서 완료되는 캠페인 타입에 대한 이벤트.
 */
- (void)ApCustomNativeCompleted;
@end
