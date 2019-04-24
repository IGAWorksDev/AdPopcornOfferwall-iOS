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

@interface AdPopcornAdListViewController : UIViewController
{
    NSString *_redirectUrl;
    NSIndexPath *_selectedIndexPath;
    UITapGestureRecognizer *_tapGestureRecognizer;
    
    int _pageIdx, _scheduleTypeCampaignCount;
    
    NSMutableArray *_adCampaignList;
    NSMutableArray *_scheduleCampaignList;
    NSMutableArray *_indexPathsForMoveArray;
    NSMutableArray *_specialOfferArray;
    NSMutableArray *_landscapeAdCampaignList;
    NSMutableArray *_landscapeSpecialAreaCampaginList;
    
    UIInterfaceOrientation _orientation;
    
    UIView *_footerView;
    UIView *_footerViewForContactUs, *_landscapeFooterViewForContactUs;
    UIView *_IpadFooterViewForContactUs;
}

@property (nonatomic, strong) NSMutableDictionary *userDataDictionaryForFilter;
@property (nonatomic, weak) id<AdListViewControllerDelegate> adListViewControllerDelegate;

- (void)playVideo:(NSString *)videoSource;
- (void)adjustOrientation:(UIInterfaceOrientation)toInterfaceOrientation;
- (void)sendCompleteRequest:(BOOL)onVideoComplete;

- (void)setViewModeWidthSize:(CGFloat)viewWidth;
- (void)setViewModeHeightSize:(CGFloat)viewHeight;
- (void)setViewModeImpression;
- (void)setViewModeTopMargin:(CGFloat)topHeight;

@end

@protocol AdListViewControllerDelegate <NSObject>

@optional
- (void)tryToGetRewardItem;
- (void)closePopoverView;
- (void)closeHelpPopoverView;
- (void)refreshRequestAdList;
- (void)interfaceOrientationDidChanged:(UIInterfaceOrientation)toInterfaceOrientation;

// video ad
- (void)closePopoverViewWithPlayVideo:(NSString *)videoSource;
- (void)closeVideoViewForIpad;

@end
