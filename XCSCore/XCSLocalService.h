//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString, NSURL, XCSService;

@interface XCSLocalService : NSObject
{
    XCSService *_cachedService;
    BOOL _isPerformingMaintenanceTask;
    BOOL _attemptGuestAuthentication;
    NSArray *_bots;
    NSString *_versionsDisplayString;
    NSError *_lastKnownConnectionError;
    NSArray *_currentMaintenanceTasks;
    NSString *_displayName;
    NSString *_username;
    NSString *_password;
    CDUnknownBlockType _statusChangedCallback;
    CDUnknownBlockType _advisoryStatusChangedCallback;
    CDUnknownBlockType _serviceInfoCallback;
}

+ (id)sharedItemWithService:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType serviceInfoCallback; // @synthesize serviceInfoCallback=_serviceInfoCallback;
@property(copy, nonatomic) CDUnknownBlockType advisoryStatusChangedCallback; // @synthesize advisoryStatusChangedCallback=_advisoryStatusChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType statusChangedCallback; // @synthesize statusChangedCallback=_statusChangedCallback;
@property(nonatomic) BOOL attemptGuestAuthentication; // @synthesize attemptGuestAuthentication=_attemptGuestAuthentication;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSArray *currentMaintenanceTasks; // @synthesize currentMaintenanceTasks=_currentMaintenanceTasks;
@property(nonatomic) BOOL isPerformingMaintenanceTask; // @synthesize isPerformingMaintenanceTask=_isPerformingMaintenanceTask;
@property(retain, nonatomic) NSError *lastKnownConnectionError; // @synthesize lastKnownConnectionError=_lastKnownConnectionError;
@property(retain, nonatomic) NSString *versionsDisplayString; // @synthesize versionsDisplayString=_versionsDisplayString;
@property(retain, nonatomic) NSArray *bots; // @synthesize bots=_bots;
- (void).cxx_destruct;
- (void)loginWithStoredCredentials:(CDUnknownBlockType)arg1;
- (void)deactivateXcodeSessionManagement;
- (void)activateXcodeSessionManagementWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) XCSService *service;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) BOOL isResolving;
@property(readonly, nonatomic) BOOL isResolved;
@property(readonly, nonatomic) NSString *clientUUID;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *connectionAddress;
@property(readonly, nonatomic) BOOL enabled;
@property(readonly, nonatomic) BOOL messageChannelConnected;
@property(readonly, nonatomic) NSString *identifier;
- (void)_observeLocalBot:(id)arg1;
- (void)fetchServerInfo;
- (void)_updateBuildQueue;
- (void)populateBots;
- (id)initWithService:(id)arg1;

@end

