//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTFilePath;

@protocol DVTServicesFileSystemSerialization <NSObject>
+ (id)objectFromFilePath:(DVTFilePath *)arg1 error:(id *)arg2;
- (BOOL)writeToFilePath:(DVTFilePath *)arg1 error:(id *)arg2;
@end

