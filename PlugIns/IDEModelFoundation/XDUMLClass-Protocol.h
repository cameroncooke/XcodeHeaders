//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XDUMLBehavioredClassifier.h"

@class NSArray;

@protocol XDUMLClass <XDUMLBehavioredClassifier>
- (void)setParentClass:(id <XDUMLClass>)arg1;
- (id <XDUMLClass>)parentClass;
- (NSArray *)superClasses;
- (NSArray *)ownedOperations;
- (NSArray *)ownedAttributes;
@end

