//
//  AdPopcornOfferwallViewController.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 4/24/24.
//  Copyright © 2024 AdPopcorn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@protocol OfferwallViewControllerDelegate;
@protocol AdPopcornOfferwallViewTypeDelegate;

@interface AdPopcornOfferwallViewController : UIViewController
{
    
}
@property (nonatomic, weak) id<OfferwallViewControllerDelegate> offerwallViewControllerDelegate;
@property (nonatomic, weak) id<AdPopcornOfferwallViewTypeDelegate> offerwallViewTypeDelegate;
@property (nonatomic, unsafe_unretained) int pageType;
@property (nonatomic, copy) NSString *openURL;
@property (nonatomic, copy) NSString *bridgePlacementId;
@property (nonatomic, copy) NSString *detailPageCampaignKey;

- (void)setViewMode:(BOOL)flag;
- (void)setViewModeWidthSize:(CGFloat)viewWidth;
- (void)setViewModeHeightSize:(CGFloat)viewHeight;
- (void)setViewModeImpression;
- (void)changeViewModeSize:(CGFloat)viewWidth viewHeight:(CGFloat)viewHeight;
- (void)closeOfferwallViewController;
@end

@protocol OfferwallViewControllerDelegate <NSObject>

@optional
- (void)completeV2Campaign;
@end

@protocol AdPopcornOfferwallViewTypeDelegate <NSObject>

@optional
- (void)OnLoadedOfferwall;
- (void)OnMeasuredOfferwallHeight:(int)height;
- (void)OnOpenedDetailPage;
- (void)OnClosedDetailPage;
@end
