/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVJSNode.h"

@class BRXMLSchema, BRXMLDocument;

__attribute__((visibility("hidden")))
@interface ATVJSDocument : ATVJSNode {
@private
	BRXMLSchema *xmlSchema;	// 12 = 0xc
	BOOL dirty;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL dirty;	// G=0x32ae6449; S=0x32ae6459; @synthesize
@property(readonly, assign, nonatomic) BRXMLDocument *xmlDocument;	// G=0x32ae6405; 
@property(retain, nonatomic) BRXMLSchema *xmlSchema;	// G=0x32ae6415; S=0x32ae6425; @synthesize
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x32ae5779
+ (void)applyDocumentUpdateFromContext:(OpaqueJSContext *)context;	// 0x32ae608d
+ (id)documentFromValue:(OpaqueJSValue *)value inContext:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x32ae6021
+ (id)documentInContext:(OpaqueJSContext *)context withDocument:(id)document withSchema:(id)schema;	// 0x32ae5fbd
- (void)dealloc;	// 0x32ae5735
// declared property getter: - (BOOL)dirty;	// 0x32ae6449
// declared property setter: - (void)setDirty:(BOOL)dirty;	// 0x32ae6459
// declared property setter: - (void)setXmlSchema:(id)schema;	// 0x32ae6425
// declared property getter: - (id)xmlDocument;	// 0x32ae6405
// declared property getter: - (id)xmlSchema;	// 0x32ae6415
@end

