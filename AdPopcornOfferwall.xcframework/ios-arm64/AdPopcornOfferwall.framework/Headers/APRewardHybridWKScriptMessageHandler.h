//
//  AdPopcornRewardHybridWKScriptMessageHandler.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 20250310
//  Copyright © 2025 AdPopcorn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface APRewardHybridWKScriptMessageHandler : NSObject<WKScriptMessageHandler>

@property (nonatomic, weak) id<WKScriptMessageHandler> scriptDelegate;
@property (nonatomic, weak) WKWebView *webView;
@property (nonatomic, weak) UIViewController *viewController;


- (instancetype)initWithDelegate:(id<WKScriptMessageHandler>)scriptDelegate viewController:(UIViewController *)vController;

@end
