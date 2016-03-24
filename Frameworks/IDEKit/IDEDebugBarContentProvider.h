//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEDebugBarContentProvider.h"

@class DVTObservingToken, IDEDebugBar, NSArray, NSString;

@interface IDEDebugBarContentProvider : NSObject <IDEDebugBarContentProvider>
{
    NSArray *_debugBarControlViews;
    DVTObservingToken *_workspaceFinishedLoadingObservation;
    DVTObservingToken *_currentDebugSessionObservation;
    DVTObservingToken *_currentDebugSessionStateObservation;
    IDEDebugBar *_debugBar;
}

@property(retain) IDEDebugBar *debugBar; // @synthesize debugBar=_debugBar;
@property(copy) NSArray *debugBarControlViews; // @synthesize debugBarControlViews=_debugBarControlViews;
- (void).cxx_destruct;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;
- (void)currentDebugSessionStateDidChange;
- (void)currentDebugSessionDidChange;
- (void)workspaceDidFinishLoading;
- (id)currentDebugSession;
- (id)currentLaunchSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) BOOL prefersDebugBarToAlwaysBeShown;
@property(readonly) Class superclass;
@property(readonly) BOOL wantsRightSideSeparatorBorder;

@end
