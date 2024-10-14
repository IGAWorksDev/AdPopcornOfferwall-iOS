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
@protocol OfferwallViewTypeDelegate;

@interface AdPopcornOfferwallViewController : UIViewController
{
    
}
@property (nonatomic, weak) id<OfferwallViewControllerDelegate> offerwallViewControllerDelegate;
@property (nonatomic, weak) id<OfferwallViewTypeDelegate> offerwallViewTypeDelegate;
@property (nonatomic, unsafe_unretained) int pageType;
@property (nonatomic, copy) NSString *openURL;

- (void)setViewMode:(BOOL)flag;
- (void)setViewModeWidthSize:(CGFloat)viewWidth;
- (void)setViewModeHeightSize:(CGFloat)viewHeight;
- (void)setViewModeImpression;
- (void)changeViewModeSize:(CGFloat)viewWidth viewHeight:(CGFloat)viewHeight;
@end

@protocol OfferwallViewControllerDelegate <NSObject>

@optional
- (void)completeV2Campaign;
@end

@protocol OfferwallViewTypeDelegate <NSObject>

@optional
- (void)OnLoadedOfferwall;
- (void)OnMeasuredOfferwallHeight:(int)height;
@end
