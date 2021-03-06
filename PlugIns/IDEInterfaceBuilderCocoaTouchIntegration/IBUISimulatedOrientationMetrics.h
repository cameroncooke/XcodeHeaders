//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBDocumentArchiving.h"
#import "IBUISimulatedMetrics.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IBUISimulatedOrientationMetrics : NSObject <NSCoding, IBDocumentArchiving, IBUISimulatedMetrics, NSCopying>
{
    int _interfaceOrientation;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)simulatedOrientationMetricsWithOrientation:(int)arg1;
+ (id)landscapeMetrics;
+ (id)portraitMetrics;
@property(readonly) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (id)nextOrientation;
- (BOOL)isPortrait;
@property(readonly, copy) NSString *description;
- (id)debugNameForInterfaceOrientation:(int)arg1;
@property(readonly) NSString *displayName;
@property(readonly) unsigned long long hash;
- (void)normalizeUnarchivedOrientationValue:(id)arg1;
- (void)unarchiveOlderInterfaceOrientationKeyIfNeeded:(id)arg1;
- (void)archiveOlderInterfaceOrientationKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOrientation:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

