//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTDispatchLock, DVTStackBacktrace, NSHashTable, NSMutableData, NSString, NSURL;

@interface IDEIndexDBStringStorage : NSObject <DVTInvalidation>
{
    NSURL *_fileURL;
    DVTDispatchLock *_lock;
    NSHashTable *_hashTable;
    NSMutableData *_data;
    long long _fileSize;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (void)findStringsContaining:(const char *)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 forEachResult:(CDUnknownBlockType)arg5;
- (id)findStringAtOffset:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (id)writeChangesToDisk;
- (long long)offsetOfString:(const char *)arg1 addIfMissing:(BOOL)arg2;
- (void)primitiveInvalidate;
- (void)close;
- (id)open;
- (id)initWithFileURL:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

