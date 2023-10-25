//
//  AdPopcornNativeReward.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 2023/10/20.
//  Copyright © 2023 AdPopcorn. All rights reserved.
//

#ifndef AdPopcornNativeReward_h
#define AdPopcornNativeReward_h
#endif /* AdPopcornNativeReward_h */

#import <UIKit/UIKit.h>

@protocol AdPopcornNativeDelegate;

@interface AdPopcornNativeReward : UIView
@property (nonatomic, weak) id<AdPopcornNativeDelegate> delegate;
@property (nonatomic, unsafe_unretained) BOOL hiddenTopArea;
@property (nonatomic, unsafe_unretained) BOOL enableAutoRolling;
@property (nonatomic, unsafe_unretained) int autoRollingTriggerTime;
@property (nonatomic, copy) NSString *nameText;
@property (nonatomic, strong) UIColor *nameTextColor;
@property (nonatomic, unsafe_unretained) BOOL enableOfferwallShortCut;
@property (nonatomic, copy) NSString *shortCutText;
@property (nonatomic, strong) UIColor *shortCutTextColor;
@property (nonatomic, strong) UIColor *shortCutRewardTextColor;
@property (nonatomic, strong) UIColor *titleTextColor;
@property (nonatomic, unsafe_unretained) int titleTextSize;
@property (nonatomic, strong) UIColor *descTextColor;
@property (nonatomic, unsafe_unretained) int descTextSize;
@property (nonatomic, strong) UIColor *ctaTextColor;
@property (nonatomic, strong) UIColor *ctaBtnColor;
@property (nonatomic, copy) UIImage *rewardIconResource;
@property (nonatomic, unsafe_unretained) CGSize rewardIconResourceSize;
@property (nonatomic, strong) UIColor *contentsBgColor;
@property (nonatomic, strong) UIColor *contentsLineColor;
@property (nonatomic, strong) UIColor *nativeBackgroundColor;

@property (nonatomic, weak) UIViewController *viewController;

- (instancetype)initWithFrame:(CGRect)frame viewController:(UIViewController *)viewController;
- (void)loadAd;
- (void)stopAd;
- (void)setMaxCampaignCount:(int) maxCampaignCount;
@end

@protocol AdPopcornNativeDelegate <NSObject>
@optional
/*!
 @abstract
 광고 로딩 성공 시, 호출된다.
 */
- (void)ApNativeRewardLoadSuccess;

/*!
 @abstract
 광고 로딩 실패 시, 호출된다
 */
- (void)ApNativeRewardLoadFailed:(NSInteger)errorCode;
@end


