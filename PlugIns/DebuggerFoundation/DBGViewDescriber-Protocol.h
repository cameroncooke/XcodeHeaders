//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTInvalidation.h"

@class CALayer, DBGLayoutConstraintSet, DBGViewChildMemberList, DBGViewObject, DBGViewSurface, IDELaunchSession, NSArray, NSData, NSString, NSURL;

@protocol DBGViewDescriber <DVTInvalidation>
+ (BOOL)shouldInstantiateInLaunchSession:(IDELaunchSession *)arg1;
+ (NSString *)viewDebuggingDylibPathForLaunchSession:(IDELaunchSession *)arg1;
@property(readonly) NSURL *url;
@property(readonly) NSString *classNameForDefaultViewIcon;
- (NSArray *)structuresForInspectableExpressions;
- (NSArray *)propertyEntriesForViewObject:(DBGViewObject *)arg1;
- (void)fetchViewInfo:(void (^)(unsigned long long, unsigned long long, double))arg1 resultHandler:(void (^)(NSArray *, DBGViewWindow *))arg2;
- (IDELaunchSession *)launchSession;
- (NSString *)associatedProcessUUID;
- (void)getDataValueForExpression:(NSString *)arg1 handler:(void (^)(DBGDataValue *))arg2;
- (CALayer *)unarchiveLayerForView:(DBGViewSurface *)arg1 fromData:(NSData *)arg2;
- (CALayer *)layerForView:(DBGViewSurface *)arg1;
- (DBGLayoutConstraintSet *)constraintsReferencingViewObject:(DBGViewObject *)arg1;
- (DBGLayoutConstraintSet *)constraintsAffectingViewObject:(DBGViewObject *)arg1;
- (unsigned long long)shouldChild:(DBGViewObject *)arg1 flattenIntoParent:(DBGViewObject *)arg2;
- (BOOL)isViewObjectInteresting:(DBGViewObject *)arg1;
- (NSArray *)classHierarchyForClass:(NSString *)arg1;
- (NSString *)targetPlatformFamilyIdentifier;
- (void)populatePropertyList:(DBGViewChildMemberList *)arg1 forObject:(DBGViewObject *)arg2 notify:(void (^)(DBGViewChildMemberList *))arg3;

@optional
- (NSString *)targetKitFamilyIdentifier;
- (void)printDescriptionOfViewObjectToConsole:(DBGViewObject *)arg1;
- (void)logDebugStringWithFormat:(NSString *)arg1;
@end

