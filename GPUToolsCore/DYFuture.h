//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray;

@interface DYFuture : NSObject
{
    id <NSObject> _result;
    NSError *_error;
    struct dispatch_queue_s *_waitQueue;
    struct dispatch_queue_s *_writeQueue;
    NSMutableArray *_notifyList;
    BOOL _resolved;
}

+ (id)future;
@property(readonly, nonatomic) BOOL resolved; // @synthesize resolved=_resolved;
- (void)notifyGroup:(struct dispatch_group_s *)arg1;
- (void)notifyOnQueue:(struct dispatch_queue_s *)arg1 handler:(CDUnknownBlockType)arg2;
- (void)resolveWithFuture:(id)arg1;
- (void)timeoutAfter:(double)arg1 label:(id)arg2;
@property(retain, nonatomic) NSError *error; // @dynamic error;
- (void)_setError:(id)arg1;
@property(retain, nonatomic) id result; // @dynamic result;
- (void)_setResult:(id)arg1;
- (int)intResult;
- (unsigned int)uint32Result;
- (BOOL)boolResult;
- (void)waitUntilResolved;
- (void)dealloc;
- (id)init;

@end

