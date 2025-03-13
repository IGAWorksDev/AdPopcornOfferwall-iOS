//
//  AdPopcornCustomReward.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 2025/03/10.
//  Copyright © 2025 AdPopcorn. All rights reserved.
//

#ifndef AdPopcornCustomReward_h
#define AdPopcornCustomReward_h

#endif /* AdPopcornCustomReward_h */

#import <UIKit/UIKit.h>

@protocol AdPopcornCustomRewardDelegate;

@interface AdPopcornCustomReward : NSObject
{

}
@property (nonatomic, weak) id<AdPopcornCustomRewardDelegate> delegate;
@property (nonatomic, weak) UIViewController *viewController;

- (instancetype)initWithViewController:(UIViewController *)viewController;
- (void)loadAd;
- (void)stopAd;
- (void)setMaxCampaignCount:(int) maxCampaignCount;
- (void)clickCampaign:(NSString *)campaignKey;
@end

@protocol AdPopcornCustomRewardDelegate <NSObject>
@optional
/*!
 @abstract
 광고 로딩 성공 시, 호출된다.
 */
- (void)ApCustomRewardLoadSuccess:(NSMutableArray *)campaignList;

/*!
 @abstract
 광고 로딩 실패 시, 호출된다
 */
- (void)ApCustomRewardLoadFailed:(NSInteger)errorCode;
@end
