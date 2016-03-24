//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class IBCocoaTouchTargetRuntime, NSString;

@interface IBUISearchDisplayController : NSObject <IBDocumentArchiving, NSCoding>
{
    IBCocoaTouchTargetRuntime *targetRuntime;
    NSString *searchResultsTitle;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(copy) NSString *searchResultsTitle; // @synthesize searchResultsTitle;
- (void).cxx_destruct;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (void)setTargetRuntime:(id)arg1;
- (id)targetRuntime;
- (id)init;
- (id)initWithTargetRuntime:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

