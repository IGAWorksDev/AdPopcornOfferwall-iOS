//
//  AdPopcornNativeRewardCPM.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 2023/03/20.
//  Copyright © 2023 AdPopcorn. All rights reserved.
//

#ifndef AdPopcornNativeRewardCPM_h
#define AdPopcornNativeRewardCPM_h
#endif /* AdPopcornNativeRewardCPM_h */

#import <UIKit/UIKit.h>

@protocol AdPopcornNativeAdDelegate;

@interface AdPopcornNativeRewardCPM : UIView
@property (nonatomic, weak) id<AdPopcornNativeAdDelegate> delegate;
@property (nonatomic, unsafe_unretained) BOOL hiddenTopArea;
@property (nonatomic, strong) UIColor *selectedIndicatorColor;
@property (nonatomic, strong) UIColor *unselectedIndicatorColor;
@property (nonatomic, copy) NSString *rcpmNameText;
@property (nonatomic, strong) UIColor *rcpmNameTextColor;
@property (nonatomic, unsafe_unretained) BOOL enableOfferwallShortCut;
@property (nonatomic, copy) NSString *shortCutLandingURL;
@property (nonatomic, copy) NSString *shortCutText;
@property (nonatomic, strong) UIColor *shortCutTextColor;
@property (nonatomic, unsafe_unretained) BOOL hiddenIndicatorArea;
@property (nonatomic, unsafe_unretained) BOOL isIndicatorTextMode;
@property (nonatomic, strong) UIColor *indicatorCurrentPageTextColor;
@property (nonatomic, strong) UIColor *indicatorTotalPageTextColor;

@property (nonatomic, strong) UIColor *titleTextColor;
@property (nonatomic, unsafe_unretained) int titleTextSize;
@property (nonatomic, strong) UIColor *descTextColor;
@property (nonatomic, unsafe_unretained) int descTextSize;
@property (nonatomic, strong) UIColor *ctaTextColor;
@property (nonatomic, strong) UIColor *ctaBtnColor;
@property (nonatomic, unsafe_unretained) BOOL isCTABtnLineType;
@property (nonatomic, copy) NSString *ctaDefaultText;
@property (nonatomic, copy) NSString *ctaDefaultCompleteText;
@property (nonatomic, unsafe_unretained) BOOL enableTextBoxOutline;

- (instancetype)initWithFrame:(CGRect)frame viewController:(UIViewController *)viewController;
- (void)loadAd;
- (void)stopAd;
- (void)setMaxCampaignCount:(int) maxCampaignCount;
- (void)setNewsCampaignAuth:(NSString *)auth;
@end

@protocol AdPopcornNativeAdDelegate <NSObject>
@optional
/*!
 @abstract
 광고 로딩 성공 시, 호출된다.
 */
- (void)ApNativeRewardCPMLoadSuccess;

/*!
 @abstract
 광고 로딩 실패 시, 호출된다
 */
- (void)ApNativeRewardCPMLoadFailed:(NSInteger)errorCode;

/*!
 @abstract
 광고 노출 시 호출 된다
 */
- (void)ApNativeRewardCPMImpression;

/*!
 @abstract
 광고 클릭시 호출 된다
 */
- (void)ApNativeRewardCPMClicked;
@end

