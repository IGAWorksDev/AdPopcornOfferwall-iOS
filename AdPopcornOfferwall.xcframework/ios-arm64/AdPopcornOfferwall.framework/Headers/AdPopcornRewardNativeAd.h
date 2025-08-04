//
//  AdPopcornRewardNativeAd.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 2025/07/25.
//  Copyright © 2025 AdPopcorn. All rights reserved.
//

#ifndef AdPopcornRewardNativeAd_h
#define AdPopcornRewardNativeAd_h
#endif /* AdPopcornRewardNativeAd_h */

#import <UIKit/UIKit.h>

@protocol AdPopcornRewardNativeAdDelegate;

@interface AdPopcornRewardNativeAd : UIView
@property (nonatomic, weak) id<AdPopcornRewardNativeAdDelegate> delegate;
@property (nonatomic, copy) NSString *placementId;
@property (nonatomic, weak) UIViewController *viewController;

- (instancetype)initWithFrame:(CGRect)frame viewController:(UIViewController *)viewController;
- (void)initWithViewController:(UIViewController *)viewController;
- (void)loadAd;
- (void)stopAd;
@end

@protocol AdPopcornRewardNativeAdDelegate <NSObject>
@optional
/*!
 @abstract
 광고 로딩 성공 시, 호출된다.
 */
- (void)ApRewardNativeAdLoadSuccess;

/*!
 @abstract
 광고 로딩 실패 시, 호출된다
 */
- (void)ApRewardNativeAdLoadFailed:(NSInteger)errorCode;

/*!
 @abstract
 광고 클릭 시 호출된다.
 */
- (void)ApRewardNativeAdClicked;

/*!
 @abstract
 광고 완료 시 호출된다.
 */
- (void)ApRewardNativeAdCompleted;
@end


