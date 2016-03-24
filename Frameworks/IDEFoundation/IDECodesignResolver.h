//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IDECodesignResolver : NSObject
{
}

+ (id)parametersForInputs:(id)arg1 identity:(id)arg2 profileUUID:(id)arg3 signingCertificateManager:(id)arg4 provisioningProfileManager:(id)arg5 withError:(id *)arg6;
+ (id)parametersForInputs:(id)arg1 identity:(id)arg2 signingCertificateManager:(id)arg3 withError:(id *)arg4;
+ (id)_identitySigningCertificatesInArray:(id)arg1 matchingIdentityString:(id)arg2 inputs:(id)arg3 withError:(id *)arg4;
+ (id)parametersForInputs:(id)arg1 applicableSigningIdentityCertificates:(id)arg2 profileManager:(id)arg3 logAspect:(id)arg4 withError:(id *)arg5;
+ (id)_filterCertificates:(id)arg1 inputs:(id)arg2 logAspect:(id)arg3 error:(id *)arg4;
+ (id)parametersForInputs:(id)arg1 signingCertificateManager:(id)arg2 provisioningProfileManager:(id)arg3 withError:(id *)arg4;
+ (id)signingIdentityCertificatesForTeamID:(id)arg1 certificateKind:(id)arg2 certificateManager:(id)arg3 logAspect:(id)arg4;
+ (id)parametersForCertificate:(id)arg1;
+ (id)parametersForAdHocSigning;
+ (id)parametersForNullSigning;
+ (id)resolutionErrorWithCode:(long long)arg1 message:(id)arg2 recoverySuggestion:(id)arg3 inputs:(id)arg4;

@end
