//
//  AdPopcornRewardCustomNativeAdModel.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 2025/03/10.
//  Copyright © 2025 AdPopcorn. All rights reserved.
//

#ifndef AdPopcornRewardCustomNativeAdModel_h
#define AdPopcornRewardCustomNativeAdModel_h

#import <Foundation/Foundation.h>

@interface AdPopcornRewardCustomNativeAdModel : NSObject

#endif /* AdPopcornRewardCustomNativeAdModel_h */
@property (nonatomic, copy) NSString *nativeCampaignId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *iconImageURL;
@property (nonatomic, copy) NSString *mainImageURL;
@property (nonatomic, unsafe_unretained) long reward;
@property (nonatomic, copy) NSString *cta;
@end
