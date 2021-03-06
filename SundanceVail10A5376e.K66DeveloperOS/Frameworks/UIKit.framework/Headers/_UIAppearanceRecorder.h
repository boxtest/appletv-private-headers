/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray, NSArray, NSData;

@interface _UIAppearanceRecorder : NSObject {
	NSString *_classNameToRecord;	// 4 = 0x4
	Class _superclassToRecord;	// 8 = 0x8
	NSArray *_containerClassNames;	// 12 = 0xc
	NSMutableArray *_customizations;	// 16 = 0x10
	NSArray *_unarchivedCustomizations;	// 20 = 0x14
}
@property(copy, nonatomic, setter=_setClassNameToRecord:) NSString *_classNameToRecord;	// G=0x3059d209; S=0x3059d21d; @synthesize
@property(copy, nonatomic, setter=_setContainerClassNames:) NSArray *_containerClassNames;	// G=0x3059d24d; S=0x3059d261; @synthesize
@property(readonly, assign, nonatomic) NSData *_serializedRepresentation;	// G=0x3059d0d5; 
@property(assign, nonatomic, setter=_setSuperclassToRecord:) Class _superclassToRecord;	// G=0x3059d22d; S=0x3059d23d; @synthesize
+ (id)_sharedAppearanceRecorder;	// 0x3059ba95
+ (id)_sharedAppearanceRecorderForClass:(Class)aClass whenContainedIn:(id)anIn;	// 0x3059bb69
+ (id)_sharedAppearanceRecorderForClassNamed:(id)classNamed superclass:(Class)superclass whenContainedIn:(id)anIn;	// 0x3059bb0d
- (id)init;	// 0x3059ba81
- (id)initWithSerializedRepresentation:(id)serializedRepresentation;	// 0x3059b8f5
- (void)_applyCustomizations;	// 0x3059c829
// declared property getter: - (id)_classNameToRecord;	// 0x3059d209
// declared property getter: - (id)_containerClassNames;	// 0x3059d24d
- (void)_importCustomizations:(id)customizations withArchiveVersion:(int)archiveVersion;	// 0x3059b845
- (void)_recordInvocation:(id)invocation withClassName:(id)className containerClassNames:(id)names selectorString:(id)string forRemoteProcess:(BOOL)remoteProcess;	// 0x3059bc61
// declared property getter: - (id)_serializedRepresentation;	// 0x3059d0d5
// declared property setter: - (void)_setClassNameToRecord:(id)record;	// 0x3059d21d
// declared property setter: - (void)_setContainerClassNames:(id)names;	// 0x3059d261
// declared property setter: - (void)_setSuperclassToRecord:(Class)record;	// 0x3059d23d
// declared property getter: - (Class)_superclassToRecord;	// 0x3059d22d
- (void)dealloc;	// 0x3059bb95
- (void)forwardInvocation:(id)invocation;	// 0x3059c7dd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3059bc21
@end

