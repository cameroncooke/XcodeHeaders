//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCSServiceConnectionDelegate.h"

@class NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSString;

@interface XCSServicesManager : NSObject <XCSServiceConnectionDelegate>
{
    NSMutableArray *_activeServices;
    NSMutableSet *_servicesWithDisconnectedSocketConnections;
    NSMapTable *_statusChangedListeners;
    NSMapTable *_advisoryStatusChangedListeners;
    NSMapTable *_servicesChangedListeners;
    BOOL _loadedServices;
    id _maintenanceTasksObserver;
    NSMutableArray *_maintenanceTaskPollTimers;
    NSMutableSet *_servicesUserCanCreateBotsOn;
    NSMutableSet *_servicesUserCanViewBotsOn;
    BOOL _isRunningInTestContext;
    BOOL _usesUserDefaultsStorage;
    NSString *_clientApplicationName;
    CDUnknownBlockType _serviceInfoCallback;
}

+ (id)sharedInstanceForTesting:(BOOL)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceUsingUserDefaultsStorage;
+ (id)_commonSharedInstanceForTesting:(BOOL)arg1 useUserDefaults:(BOOL)arg2;
+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType serviceInfoCallback; // @synthesize serviceInfoCallback=_serviceInfoCallback;
@property(nonatomic) BOOL usesUserDefaultsStorage; // @synthesize usesUserDefaultsStorage=_usesUserDefaultsStorage;
@property(retain, nonatomic) NSString *clientApplicationName; // @synthesize clientApplicationName=_clientApplicationName;
- (void).cxx_destruct;
- (void)serviceConnectionStatusDidDisconnect:(id)arg1;
- (void)serviceConnectionStatusDidConnect:(id)arg1;
- (BOOL)canUserCreateBotsOnAnyService;
- (BOOL)canUserViewBotsOnService:(id)arg1;
- (BOOL)canUserEditBotOnService:(id)arg1;
- (void)_refreshACLCacheForService:(id)arg1;
- (void)removeAllServicesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)existingServiceMatchingConnectionAddress:(id)arg1;
- (id)existingServiceMatchingNetServiceName:(id)arg1;
- (id)serviceMatchingURLString:(id)arg1;
- (id)serviceMatchingClientUUID:(id)arg1;
- (void)_loadServices;
- (void)deactivateService:(id)arg1;
- (void)activateService:(id)arg1;
- (id)_localCachePath:(id *)arg1;
- (void)cacheAccounts:(id)arg1;
- (id)accounts;
- (void)removeService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addNewService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addAccountForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addAccountForConnectionAddress:(id)arg1 withUserName:(id)arg2 password:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)disableService:(id)arg1;
- (void)enableService:(id)arg1;
- (void)updateCache;
- (void)_enableService:(BOOL)arg1 service:(id)arg2;
- (id)dictionaryForService:(id)arg1;
- (void)resetForTesting;
- (void)resetAccounts;
- (void)removeServicesChangedCallbackLisenter:(id)arg1;
- (void)_fireServicesChangedCallbackForService:(id)arg1;
- (void)addServicesChangedCallbackLisenter:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)removeAdvisoryStatusChangedCallbackLisenter:(id)arg1;
- (void)_fireAdvisoryStatusChangedCallbackForService:(id)arg1 bot:(id)arg2 integration:(id)arg3;
- (void)addAdvisoryStatusChangedCallbackLisenter:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_fireStatusChangedCallbackForService:(id)arg1 bot:(id)arg2 integration:(id)arg3;
- (void)removeStatusChangedCallbackLisenter:(id)arg1;
- (void)addStatusChangedCallbackLisenter:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *enabledServices;
@property(readonly, nonatomic) NSArray *services;
- (void)_pollServiceForMaintenaceTasks:(id)arg1;
- (void)pollServiceForMaintenaceTasks:(id)arg1;
- (void)_cancelMaintenanceTasksPollingOnService:(id)arg1;
- (void)_observeMaintenanceTasks;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

