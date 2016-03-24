//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTNotificationToken, DVTObservingToken, IDEActivityReport;

@interface IDEIndexerActivityReporter : IDEActivityReporter
{
    DVTObservingToken *_workspaceIndexObservingToken;
    DVTNotificationToken *_willIndexWorkspaceNotificationObservingToken;
    DVTNotificationToken *_isIndexingWorkspaceNotificationObservingToken;
    DVTNotificationToken *_didIndexWorkspaceNotificationObservingToken;
    IDEActivityReport *_workspaceActivityReport;
    BOOL _highPriority;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)cancelActivityReport;
- (void)updateActivityReport:(id)arg1;
- (void)publishActivityReport:(id)arg1;
- (void)setupIndexObserving;
- (id)initWithWorkspace:(id)arg1;

@end
