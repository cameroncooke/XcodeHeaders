//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEProvisioningProfileSource.h"

@class DVTNotificationToken, DVTStackBacktrace, NSString;

@interface IDEDVTProvisioningProfileSource : NSObject <IDEProvisioningProfileSource>
{
    id <IDEProvisioningProfileSourceDelegate> _delegate;
    id <DVTProvisioningProfileSource> _dvtProfileSource;
    DVTNotificationToken *_addedProfilesNoteToken;
    DVTNotificationToken *_removedProfilesNoteToken;
}

+ (void)initialize;
+ (id)provisioningProfileSourceWithDVTProfileSource:(id)arg1;
- (void).cxx_destruct;
- (id)provisioningProfiles;
@property(retain, nonatomic) id <IDEProvisioningProfileSourceDelegate> delegate;
- (id)dvtProfileSource;
- (void)primitiveInvalidate;
- (id)initWithDVTProfileSource:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

