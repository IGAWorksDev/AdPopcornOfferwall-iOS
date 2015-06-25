//
//  RewardInfo.h
//  AdPOPcornSDKRevision
//
//  Created by wonje,song on 12. 12. 18..
//  Copyright (c) 2012년 wonje,song. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RewardInfo : NSObject

@property (nonatomic, copy) NSString *campaignKey;
@property (nonatomic, copy) NSString *campaignName;
@property (nonatomic, copy) NSString *itemKey;
@property (nonatomic, copy) NSString *itemName;
@property (nonatomic, copy) NSString *RTID;
@property (nonatomic, unsafe_unretained) NSUInteger  quantity;


@end
