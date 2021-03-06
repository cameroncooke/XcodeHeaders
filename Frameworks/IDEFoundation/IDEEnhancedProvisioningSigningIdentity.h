//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEEnhancedProvisioningSigningIdentity.h"

@class NSDate, NSString;

@interface IDEEnhancedProvisioningSigningIdentity : NSObject <IDEEnhancedProvisioningSigningIdentity>
{
    id <IDEProvisioningLocalIdentityState> _localState;
    id <IDEProvisioningSigningIdentity> _signingIdentity;
    unsigned long long _state;
}

@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) id <IDEProvisioningSigningIdentity> signingIdentity; // @synthesize signingIdentity=_signingIdentity;
@property(readonly, nonatomic) id <IDEProvisioningLocalIdentityState> localState; // @synthesize localState=_localState;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *teamMemberID;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, copy, nonatomic) NSString *certificateKind;
@property(readonly, copy) NSString *description;
- (id)initWithSigningIdentity:(id)arg1 state:(unsigned long long)arg2 localState:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

