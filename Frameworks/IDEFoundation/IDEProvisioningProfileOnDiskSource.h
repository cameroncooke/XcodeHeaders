//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEProvisioningProfileSource.h"

@class DVTStackBacktrace, NSArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface IDEProvisioningProfileOnDiskSource : NSObject <IDEProvisioningProfileSource>
{
    NSObject<OS_dispatch_queue> *_sourceQueue;
    BOOL _cacheWriteScheduledOnSourceQueue;
    id <IDEProvisioningProfileSourceDelegate> _delegate;
    NSArray *_searchPaths;
    NSMutableSet *_profiles;
}

+ (id)onDiskSourceForSearchPaths:(id)arg1;
+ (id)defaultOnDiskSource;
- (void).cxx_destruct;
- (id)allCandidateProvisioningProfilesInDirectory:(id)arg1;
- (id)allCandidateProvisioningProfileDataInDirectory:(id)arg1;
- (id)allProvisioningProfileFilesInDirectory:(id)arg1;
- (void)_beginObservingSearchPathsForChanges;
- (void)_reloadProvisioningProfilesInDirectory:(id)arg1;
- (void)_maybeScheduleCacheWrite;
- (id)_logAspect;
- (void)primitiveInvalidate;
- (id)provisioningProfiles;
@property(retain, nonatomic) id <IDEProvisioningProfileSourceDelegate> delegate;
- (id)initWithSearchPaths:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

