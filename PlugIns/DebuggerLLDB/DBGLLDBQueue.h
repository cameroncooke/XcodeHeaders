//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEDebugQueue.h"

__attribute__((visibility("hidden")))
@interface DBGLLDBQueue : IDEDebugQueue
{
    struct SBQueue _lldbQueue;
    unsigned long long _numPendingBlocks;
    BOOL _derivedPendingBlocks;
}

+ (BOOL)supportsInvalidationPrevention;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (unsigned long long)numberOfPendingBlocks;
- (id)pendingBlocksThreads;
- (id)lldbSession;
- (struct SBQueue)lldbQueue;
- (id)initWithParentProcess:(id)arg1 lldbQueue:(struct SBQueue)arg2;

@end
