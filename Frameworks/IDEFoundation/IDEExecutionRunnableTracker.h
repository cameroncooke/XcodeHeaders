//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEExecutionTracker.h>

@class IDERunOperationWorker;

@interface IDEExecutionRunnableTracker : IDEExecutionTracker
{
    IDERunOperationWorker *_worker;
    BOOL _finishedRunning;
}

- (void).cxx_destruct;
- (id)notFinishedReasonWithDepth:(unsigned long long)arg1;
- (void)executionWantsHold:(BOOL)arg1 withError:(id)arg2;
- (void)runningDidFinish:(id)arg1 withError:(id)arg2;
- (void)cancel;
- (BOOL)isFinished;
- (id)initWithWorker:(id)arg1;
- (id)init;

@end
