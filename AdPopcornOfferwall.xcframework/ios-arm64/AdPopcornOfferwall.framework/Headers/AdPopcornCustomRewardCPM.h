//
//  AdPopcornCustomRewardCPM.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 2024/03/12.
//  Copyright © 2024 AdPopcorn. All rights reserved.
//

#ifndef AdPopcornCustomRewardCPM_h
#define AdPopcornCustomRewardCPM_h

#endif /* AdPopcornCustomRewardCPM_h */

#import <UIKit/UIKit.h>

@protocol AdPopcornCustomRewardCPMDelegate;

@interface AdPopcornCustomRewardCPM : NSObject
{

}
@property (nonatomic, weak) id<AdPopcornCustomRewardCPMDelegate> delegate;
@property (nonatomic, weak) UIViewController *viewController;

- (instancetype)initWithViewController:(UIViewController *)viewController;
- (void)loadAd;
- (void)stopAd;
- (void)setMaxCampaignCount:(int) maxCampaignCount;
- (void)impressionCampaign:(NSString *) contentsId;
- (void)clickCampaign:(NSString *) contentsId;
- (void)setNewsCampaignAuth:(NSString *)auth;
@end

@protocol AdPopcornCustomRewardCPMDelegate <NSObject>
@optional
/*!
 @abstract
 광고 로딩 성공 시, 호출된다.
 */
- (void)ApCustomRewardCPMLoadSuccess:(NSMutableArray *) campaignList;

/*!
 @abstract
 광고 로딩 실패 시, 호출된다
 */
- (void)ApCustomRewardCPMLoadFailed:(NSInteger)errorCode;

/*!
 @abstract
 광고 클릭 후, 참여 성공 시 호출된다.
 */
- (void)ApCustomRewardCPMClickSuccess;

/*!
 @abstract
 광고 클릭 후, 참여 실패 시 호출된다.
 */
- (void)ApCustomRewardCPMClickFailed:(NSInteger)errorCode;
@end
