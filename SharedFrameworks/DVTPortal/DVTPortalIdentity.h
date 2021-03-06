//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPortalCertificate, NSString;

@interface DVTPortalIdentity : NSObject
{
    DVTPortalCertificate *_certificate;
    NSString *_keyName;
    id _underlyingPrivateKey;
}

+ (id)createIdentityWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 error:(id *)arg4;
+ (id)identityWithCertificate:(id)arg1 privateKey:(struct OpaqueSecKeyRef *)arg2 keyName:(id)arg3;
@property(retain) id underlyingPrivateKey; // @synthesize underlyingPrivateKey=_underlyingPrivateKey;
@property(readonly) NSString *keyName; // @synthesize keyName=_keyName;
@property(readonly) DVTPortalCertificate *certificate; // @synthesize certificate=_certificate;
- (void).cxx_destruct;
@property(readonly) struct OpaqueSecKeyRef *privateKey;
- (id)_initWithCertificate:(id)arg1 privateKey:(struct OpaqueSecKeyRef *)arg2 keyName:(id)arg3;

@end

