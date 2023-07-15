//
//  AdListViewController.h
//  IgaworksAd
//
//  Created by wonje,song on 2014. 1. 14..
//  Copyright (c) 2014년 wonje,song. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AdListViewControllerDelegate;

typedef enum _presentedViewType
{
    Potrait,
    Landscape
} PresentedViewType;

@class AdPopcornTabInfo;

@interface AdPopcornAdListViewController : UIViewController
{
}

@property (nonatomic, strong) NSMutableDictionary *userDataDictionaryForFilter;
@property (nonatomic, weak) id<AdListViewControllerDelegate> adListViewControllerDelegate;
@property (nonatomic, unsafe_unretained) BOOL isCPMMode;
@property (nonatomic, strong) AdPopcornTabInfo *customTabInfo;

- (void)adjustOrientation:(UIInterfaceOrientation)toInterfaceOrientation;
- (void)setViewMode:(BOOL)flag hiddenSplashScreen:(BOOL)hidden hiddenTopBar:(BOOL)topBarHidden;
- (void)setViewModeWidthSize:(CGFloat)viewWidth;
- (void)setViewModeHeightSize:(CGFloat)viewHeight;
- (void)setViewModeImpression;
@end

@protocol AdListViewControllerDelegate <NSObject>

@optional
- (void)tryToGetRewardItem;
- (void)interfaceOrientationDidChanged:(UIInterfaceOrientation)toInterfaceOrientation;
- (void)exitOfferwall;
- (void)handleClickTab:(UIGestureRecognizer *)recognizer;
- (void)handleClickSubTab:(UIGestureRecognizer *)recognizer;
- (void)completeNewsCampaign:(NSString *)auth;
- (void)completeWebViewCampaign:(NSString *)auth;
- (void)showWebViewCampaign:(NSString *)url;
@end
