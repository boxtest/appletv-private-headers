/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "NSCoding.h"
#import "CAPropertyInfo.h"
#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "CAMediaTiming.h"

@class NSDictionary, NSArray, NSString;

@interface CAEmitterCell : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
@private
	void *_attr[2];	// 4 = 0x4
	void *_state;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
}
@property(assign) float alphaRange;	// G=0x308635e9; S=0x308635d1; 
@property(assign) float alphaSpeed;	// G=0x308635b9; S=0x308635a1; 
@property(assign) BOOL autoreverses;	// G=0x30863b29; S=0x30863b11; 
@property(assign) double beginTime;	// G=0x30863c9d; S=0x30863c79; 
@property(assign) float birthRate;	// G=0x30863a39; S=0x30863a21; 
@property(assign) float blueRange;	// G=0x30863649; S=0x30863631; 
@property(assign) float blueSpeed;	// G=0x30863619; S=0x30863601; 
@property(assign) CGColorRef color;	// G=0x30863739; S=0x30863721; 
@property(retain) id contents;	// G=0x30863589; S=0x30863571; 
@property(assign) CGRect contentsRect;	// G=0x3086355d; S=0x3086352d; 
@property(assign) double duration;	// G=0x30863c0d; S=0x30863be9; 
@property(assign) float emissionLatitude;	// G=0x308639a9; S=0x30863991; 
@property(assign) float emissionLongitude;	// G=0x30863979; S=0x30863961; 
@property(assign) float emissionRange;	// G=0x30863949; S=0x30863931; 
@property(copy) NSArray *emitterCells;	// G=0x30863485; S=0x3086346d; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x30863a99; S=0x30863a81; 
@property(copy) NSString *fillMode;	// G=0x30863af9; S=0x30863ae1; 
@property(assign) float greenRange;	// G=0x308636a9; S=0x30863691; 
@property(assign) float greenSpeed;	// G=0x30863679; S=0x30863661; 
@property(assign) float lifetime;	// G=0x30863a09; S=0x308639f1; 
@property(assign) float lifetimeRange;	// G=0x308639d9; S=0x308639c1; 
@property(copy) NSString *magnificationFilter;	// G=0x30863515; S=0x308634fd; 
@property(copy) NSString *minificationFilter;	// G=0x308634e5; S=0x308634cd; 
@property(assign) float minificationFilterBias;	// G=0x308634b5; S=0x3086349d; 
@property(copy) NSString *name;	// G=0x30863ac9; S=0x30863ab1; 
@property(assign) float redRange;	// G=0x30863709; S=0x308636f1; 
@property(assign) float redSpeed;	// G=0x308636d9; S=0x308636c1; 
@property(assign) float repeatCount;	// G=0x30863ba1; S=0x30863b89; 
@property(assign) double repeatDuration;	// G=0x30863b65; S=0x30863b41; 
@property(assign) float scale;	// G=0x30863829; S=0x30863811; 
@property(assign) float scaleRange;	// G=0x308637f9; S=0x308637e1; 
@property(assign) float scaleSpeed;	// G=0x308637c9; S=0x308637b1; 
@property(assign) float speed;	// G=0x30863bd1; S=0x30863bb9; 
@property(assign) float spin;	// G=0x30863799; S=0x30863781; 
@property(assign) float spinRange;	// G=0x30863769; S=0x30863751; 
@property(copy) NSDictionary *style;	// G=0x30863a69; S=0x30863a51; 
@property(assign) double timeOffset;	// G=0x30863c55; S=0x30863c31; 
@property(assign) float velocity;	// G=0x30863919; S=0x30863901; 
@property(assign) float velocityRange;	// G=0x308638e9; S=0x308638d1; 
@property(assign) float xAcceleration;	// G=0x308638b9; S=0x308638a1; 
@property(assign) float yAcceleration;	// G=0x30863889; S=0x30863871; 
@property(assign) float zAcceleration;	// G=0x30863859; S=0x30863841; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x30863239
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30863269
+ (id)defaultValueForKey:(id)key;	// 0x30863289
+ (id)emitterCell;	// 0x30863435
+ (id)properties;	// 0x30864725
- (id)initWithCoder:(id)coder;	// 0x30863f51
- (Object *)CA_copyRenderValue;	// 0x30863f9d
- (void)CA_prepareRenderValue;	// 0x30864501
// declared property getter: - (float)alphaRange;	// 0x308635e9
// declared property getter: - (float)alphaSpeed;	// 0x308635b9
// declared property getter: - (BOOL)autoreverses;	// 0x30863b29
// declared property getter: - (double)beginTime;	// 0x30863c9d
// declared property getter: - (float)birthRate;	// 0x30863a39
// declared property getter: - (float)blueRange;	// 0x30863649
// declared property getter: - (float)blueSpeed;	// 0x30863619
// declared property getter: - (CGColorRef)color;	// 0x30863739
// declared property getter: - (id)contents;	// 0x30863589
// declared property getter: - (CGRect)contentsRect;	// 0x3086355d
- (void)dealloc;	// 0x308631c9
- (id)debugDescription;	// 0x30863cc1
// declared property getter: - (double)duration;	// 0x30863c0d
// declared property getter: - (float)emissionLatitude;	// 0x308639a9
// declared property getter: - (float)emissionLongitude;	// 0x30863979
// declared property getter: - (float)emissionRange;	// 0x30863949
// declared property getter: - (id)emitterCells;	// 0x30863485
- (void)encodeWithCoder:(id)coder;	// 0x30863f49
// declared property getter: - (id)fillMode;	// 0x30863af9
// declared property getter: - (float)greenRange;	// 0x308636a9
// declared property getter: - (float)greenSpeed;	// 0x30863679
// declared property getter: - (BOOL)isEnabled;	// 0x30863a99
// declared property getter: - (float)lifetime;	// 0x30863a09
// declared property getter: - (float)lifetimeRange;	// 0x308639d9
// declared property getter: - (id)magnificationFilter;	// 0x30863515
// declared property getter: - (id)minificationFilter;	// 0x308634e5
// declared property getter: - (float)minificationFilterBias;	// 0x308634b5
// declared property getter: - (id)name;	// 0x30863ac9
// declared property getter: - (float)redRange;	// 0x30863709
// declared property getter: - (float)redSpeed;	// 0x308636d9
// declared property getter: - (float)repeatCount;	// 0x30863ba1
// declared property getter: - (double)repeatDuration;	// 0x30863b65
// declared property getter: - (float)scale;	// 0x30863829
// declared property getter: - (float)scaleRange;	// 0x308637f9
// declared property getter: - (float)scaleSpeed;	// 0x308637c9
// declared property setter: - (void)setAlphaRange:(float)range;	// 0x308635d1
// declared property setter: - (void)setAlphaSpeed:(float)speed;	// 0x308635a1
// declared property setter: - (void)setAutoreverses:(BOOL)autoreverses;	// 0x30863b11
// declared property setter: - (void)setBeginTime:(double)time;	// 0x30863c79
// declared property setter: - (void)setBirthRate:(float)rate;	// 0x30863a21
// declared property setter: - (void)setBlueRange:(float)range;	// 0x30863631
// declared property setter: - (void)setBlueSpeed:(float)speed;	// 0x30863601
// declared property setter: - (void)setColor:(CGColorRef)color;	// 0x30863721
// declared property setter: - (void)setContents:(id)contents;	// 0x30863571
// declared property setter: - (void)setContentsRect:(CGRect)rect;	// 0x3086352d
// declared property setter: - (void)setDuration:(double)duration;	// 0x30863be9
// declared property setter: - (void)setEmissionLatitude:(float)latitude;	// 0x30863991
// declared property setter: - (void)setEmissionLongitude:(float)longitude;	// 0x30863961
// declared property setter: - (void)setEmissionRange:(float)range;	// 0x30863931
// declared property setter: - (void)setEmitterCells:(id)cells;	// 0x3086346d
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x30863a81
// declared property setter: - (void)setFillMode:(id)mode;	// 0x30863ae1
// declared property setter: - (void)setGreenRange:(float)range;	// 0x30863691
// declared property setter: - (void)setGreenSpeed:(float)speed;	// 0x30863661
// declared property setter: - (void)setLifetime:(float)lifetime;	// 0x308639f1
// declared property setter: - (void)setLifetimeRange:(float)range;	// 0x308639c1
// declared property setter: - (void)setMagnificationFilter:(id)filter;	// 0x308634fd
// declared property setter: - (void)setMinificationFilter:(id)filter;	// 0x308634cd
// declared property setter: - (void)setMinificationFilterBias:(float)bias;	// 0x3086349d
// declared property setter: - (void)setName:(id)name;	// 0x30863ab1
// declared property setter: - (void)setRedRange:(float)range;	// 0x308636f1
// declared property setter: - (void)setRedSpeed:(float)speed;	// 0x308636c1
// declared property setter: - (void)setRepeatCount:(float)count;	// 0x30863b89
// declared property setter: - (void)setRepeatDuration:(double)duration;	// 0x30863b41
// declared property setter: - (void)setScale:(float)scale;	// 0x30863811
// declared property setter: - (void)setScaleRange:(float)range;	// 0x308637e1
// declared property setter: - (void)setScaleSpeed:(float)speed;	// 0x308637b1
// declared property setter: - (void)setSpeed:(float)speed;	// 0x30863bb9
// declared property setter: - (void)setSpin:(float)spin;	// 0x30863781
// declared property setter: - (void)setSpinRange:(float)range;	// 0x30863751
// declared property setter: - (void)setStyle:(id)style;	// 0x30863a51
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x30863c31
- (void)setValue:(id)value forKey:(id)key;	// 0x30863edd
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x30863d71
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x30863e15
// declared property setter: - (void)setVelocity:(float)velocity;	// 0x30863901
// declared property setter: - (void)setVelocityRange:(float)range;	// 0x308638d1
// declared property setter: - (void)setXAcceleration:(float)acceleration;	// 0x308638a1
// declared property setter: - (void)setYAcceleration:(float)acceleration;	// 0x30863871
// declared property setter: - (void)setZAcceleration:(float)acceleration;	// 0x30863841
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x30863f59
// declared property getter: - (float)speed;	// 0x30863bd1
// declared property getter: - (float)spin;	// 0x30863799
// declared property getter: - (float)spinRange;	// 0x30863769
// declared property getter: - (id)style;	// 0x30863a69
// declared property getter: - (double)timeOffset;	// 0x30863c55
- (id)valueForKey:(id)key;	// 0x30863f15
- (id)valueForKeyPath:(id)keyPath;	// 0x30863e0d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x30863e91
// declared property getter: - (float)velocity;	// 0x30863919
// declared property getter: - (float)velocityRange;	// 0x308638e9
// declared property getter: - (float)xAcceleration;	// 0x308638b9
// declared property getter: - (float)yAcceleration;	// 0x30863889
// declared property getter: - (float)zAcceleration;	// 0x30863859
@end

