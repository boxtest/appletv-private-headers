/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class Protocol, NSMutableDictionary;

@interface NSXPCInterface : NSObject {
	Protocol *_protocol;	// 4 = 0x4
	NSMutableDictionary *_methods;	// 8 = 0x8
	id _reserved1;	// 12 = 0xc
}
@property(assign) Protocol *protocol;	// G=0x318ee451; S=0x318ed921; 
+ (id)interfaceWithProtocol:(id)protocol;	// 0x318ed875
+ (id)signatureForBlock:(id)block;	// 0x31a0a8f1
- (id)init;	// 0x318ed8c5
- (id)_allowedClassesForSelector:(id)selector reply:(BOOL)reply;	// 0x318f2275
- (id)_interfaceForArgument:(unsigned)argument ofSelector:(id)selector reply:(BOOL)reply;	// 0x318eefe1
- (id)_verifiedMethodSignatureForReplyBlockOfSelector:(id)selector;	// 0x318f21f5
- (id)_verifiedMethodSignatureForSelector:(id)selector;	// 0x31a0bf0d
- (Class)classForSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x31a0b995
- (id)classesForSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x31a0ad01
- (void)dealloc;	// 0x31a0a5c9
- (id)debugDescription;	// 0x31a0a615
- (id)interfaceForSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x31a0b675
// declared property getter: - (id)protocol;	// 0x318ee451
- (id)replyBlockSignatureForSelector:(SEL)selector;	// 0x31a0bd01
- (void)setClass:(Class)aClass forSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x31a0b94d
- (void)setClasses:(id)classes forSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x31a0a959
- (void)setInterface:(id)interface forSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x31a0afa5
// declared property setter: - (void)setProtocol:(id)protocol;	// 0x318ed921
- (void)setReplyBlockSignature:(id)signature forSelector:(SEL)selector;	// 0x31a0b9c9
@end
