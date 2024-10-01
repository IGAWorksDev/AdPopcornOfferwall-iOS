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

@interface AdPopcornOfferwallViewController : UIViewController
{
    
}
@property (nonatomic, weak) id<OfferwallViewControllerDelegate> offerwallViewControllerDelegate;
@property (nonatomic, unsafe_unretained) int pageType;
@property (nonatomic, copy) NSString *openURL;

- (void)setViewMode:(BOOL)flag;
- (void)setViewModeWidthSize:(CGFloat)viewWidth;
- (void)setViewModeHeightSize:(CGFloat)viewHeight;
- (void)setViewModeImpression;
@end

@protocol OfferwallViewControllerDelegate <NSObject>

@optional
- (void)completeV2Campaign;
@end
