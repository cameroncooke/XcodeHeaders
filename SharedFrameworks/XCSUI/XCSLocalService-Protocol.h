//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCSLocalObject.h"

@class IDEWorkspace, NSArray, NSString;

@protocol XCSLocalService <XCSLocalObject>
- (IDEWorkspace *)filterBotsToWorksapce;
- (void)setFilterBotsToWorkspace:(IDEWorkspace *)arg1;
- (NSArray *)items;
- (NSString *)identifier;
@end

