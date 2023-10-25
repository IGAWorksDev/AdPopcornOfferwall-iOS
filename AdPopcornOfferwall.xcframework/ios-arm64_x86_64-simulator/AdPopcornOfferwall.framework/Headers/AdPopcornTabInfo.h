//
//  AdPopcornTabInfo.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 2023/01/09.
//  Copyright © 2023 wonje,song. All rights reserved.
//

#ifndef AdPopcornTabInfo_h
#define AdPopcornTabInfo_h


#endif /* AdPopcornTabInfo_h */

#import <Foundation/Foundation.h>

@interface AdPopcornTabInfo : NSObject
@property (nonatomic, unsafe_unretained) NSInteger tabCount;
@property (nonatomic, copy) NSString *firstTabTitle;
@property (nonatomic, copy) NSString *secondTabTitle;
@property (nonatomic, copy) NSString *thirdTabTitle;
@property (nonatomic, copy) NSString *fourthTabTitle;
@property (nonatomic, copy) NSString *fifthTabTitle;

@property (nonatomic, unsafe_unretained) NSInteger firstTabType;
@property (nonatomic, unsafe_unretained) NSInteger secondTabType;
@property (nonatomic, unsafe_unretained) NSInteger thirdTabType;
@property (nonatomic, unsafe_unretained) NSInteger fourthTabType;
@property (nonatomic, unsafe_unretained) NSInteger fifthTabType;

- (NSString *)getTabTitle:(NSInteger)position;
- (NSInteger)getTabType:(NSInteger)position;
@end
