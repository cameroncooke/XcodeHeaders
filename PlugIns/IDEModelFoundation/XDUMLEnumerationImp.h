//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLDataTypeImp.h>

#import "XDUMLEnumeration.h"

@class NSMutableArray, NSString;

@interface XDUMLEnumerationImp : XDUMLDataTypeImp <XDUMLEnumeration>
{
    NSMutableArray *_literals;
}

- (void).cxx_destruct;
- (id)newLiteralWithName:(id)arg1;
- (id)ownedLiterals;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

