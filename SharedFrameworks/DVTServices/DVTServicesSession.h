//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTDirectoryServicesSessionDescription.h"

@class DVTDeveloperAccount, DVTDeveloperAccountSession, DVTLogAspect, NSData, NSString;

@interface DVTServicesSession : NSObject <DVTDirectoryServicesSessionDescription>
{
    DVTDeveloperAccount *_account;
    DVTLogAspect *_logAspect;
    long long _executionContext;
    DVTDeveloperAccountSession *_accountSession;
}

+ (id)_servicesSessionErrorFromAccountError:(id)arg1 account:(id)arg2;
+ (id)servicesSessionWithDeveloperAccountSession:(id)arg1 executionContext:(long long)arg2;
+ (id)servicesSessionByLoggingInWithAccount:(id)arg1 executionContext:(long long)arg2 error:(id *)arg3;
@property(retain, nonatomic) DVTDeveloperAccountSession *accountSession; // @synthesize accountSession=_accountSession;
@property(readonly, nonatomic) long long executionContext; // @synthesize executionContext=_executionContext;
@property(retain, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *sessionData;
@property(readonly, copy, nonatomic) NSString *sessionID;
- (id)initWithAccount:(id)arg1 accountSession:(id)arg2 executionContext:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
