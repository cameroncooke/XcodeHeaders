//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBlockOperation.h"

#import "DVTSourceControlCancellable.h"

@class NSString;

@interface DVTSourceControlMultiCancellable : NSBlockOperation <DVTSourceControlCancellable>
{
    id <DVTSourceControlCancellable> _currentCancellable;
    BOOL suppressAuthenticationFailure;
    id context;
}

@property __weak id context; // @synthesize context;
@property BOOL suppressAuthenticationFailure; // @synthesize suppressAuthenticationFailure;
- (void).cxx_destruct;
- (void)cancel;
@property(retain) id <DVTSourceControlCancellable> currentCancellable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
