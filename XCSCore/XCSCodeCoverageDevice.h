//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSCodeCoverageObject.h>

@class NSNumber, NSString, XCSCodeCoverageIntegration, XCSDevice;

@interface XCSCodeCoverageDevice : XCSCodeCoverageObject
{
    XCSCodeCoverageIntegration *_integration;
    XCSDevice *_device;
    NSString *_deviceTinyID;
}

@property(copy, nonatomic) NSString *deviceTinyID; // @synthesize deviceTinyID=_deviceTinyID;
@property(retain, nonatomic) XCSDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak XCSCodeCoverageIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)_bindHierarchyWithIntegration:(id)arg1 parentObject:(id)arg2;
- (BOOL)_validateWithDeviceTinyID:(id)arg1 validationErrors:(id *)arg2;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)ccifRepresentation;
- (id)ccimRepresentation;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSNumber *lineCoveragePercentage;
- (id)keyPath;
- (id)_initWithDeviceTinyID:(id)arg1 skipValidation:(BOOL)arg2 skipBindHierarchy:(BOOL)arg3 validationErrors:(id *)arg4;
- (id)initWithContents:(id)arg1 service:(id)arg2 skipValidation:(BOOL)arg3 skipBindHierarchy:(BOOL)arg4 validationErrors:(id *)arg5;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end

