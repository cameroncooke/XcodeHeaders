//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class CAAnimation, NSArray, NSString;

@protocol SCNMaterialPropertyJSExport <JSExport>
+ (id)materialPropertyWithContents:(id)arg1;
@property(nonatomic) double maxAnisotropy;
@property(nonatomic) long long mappingChannel;
@property(retain, nonatomic) id borderColor;
@property(nonatomic) long long wrapT;
@property(nonatomic) long long wrapS;
@property(nonatomic) struct CATransform3D contentsTransform;
@property(nonatomic) long long mipFilter;
@property(nonatomic) long long magnificationFilter;
@property(nonatomic) long long minificationFilter;
@property(nonatomic) double intensity;
@property(retain, nonatomic) id contents;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
@end

