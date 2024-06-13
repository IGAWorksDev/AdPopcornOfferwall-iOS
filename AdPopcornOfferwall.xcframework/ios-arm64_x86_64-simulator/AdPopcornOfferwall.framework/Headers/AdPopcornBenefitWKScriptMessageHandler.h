//
//  AdPopcornBenefitWKScriptMessageHandler.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 6/11/24.
//  Copyright © 2024 AdPopcorn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface AdPopcornBenefitWKScriptMessageHandler : NSObject<WKScriptMessageHandler>

@property (nonatomic, weak) id<WKScriptMessageHandler> scriptDelegate;
@property (nonatomic, weak) WKWebView *webView;
@property (nonatomic, weak) UIViewController *viewController;


- (instancetype)initWithDelegate:(id<WKScriptMessageHandler>)scriptDelegate viewController:(UIViewController *)vController;

@end
