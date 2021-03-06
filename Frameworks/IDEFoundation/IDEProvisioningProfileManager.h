//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEProvisioningProfileSourceDelegate.h"

@class DVTDelayedInvocation, DVTDispatchLock, DVTStackBacktrace, NSMutableSet, NSSet, NSString;

@interface IDEProvisioningProfileManager : NSObject <IDEProvisioningProfileSourceDelegate, DVTInvalidation>
{
    NSMutableSet *_provisioningProfiles;
    DVTDispatchLock *_provisioningProfilesLock;
    DVTDelayedInvocation *_didChangeInvocation;
    id <IDEProvisioningProfileSource> _profileSource;
}

+ (void)initialize;
+ (id)defaultProfileManager;
@property(readonly, nonatomic) id <IDEProvisioningProfileSource> profileSource; // @synthesize profileSource=_profileSource;
- (void).cxx_destruct;
- (void)forceProfileLoading;
- (void)_loadProfilesInBackground:(BOOL)arg1;
- (void)_postProfilesDidChangeNotification;
- (void)provisioningProfileSource:(id)arg1 didRemoveProfiles:(id)arg2;
- (void)provisioningProfileSource:(id)arg1 didAddProfiles:(id)arg2;
- (id)_logAspect;
@property(readonly) NSSet *provisioningProfiles;
- (void)primitiveInvalidate;
- (id)initWithProfileSource:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

