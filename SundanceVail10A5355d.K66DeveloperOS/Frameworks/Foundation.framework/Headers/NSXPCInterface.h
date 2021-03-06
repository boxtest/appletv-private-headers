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
@property(assign) Protocol *protocol;	// G=0x34796c61; S=0x34796b95; 
+ (id)interfaceWithProtocol:(id)protocol;	// 0x34796759
+ (id)signatureForBlock:(id)block;	// 0x34796b2d
- (id)init;	// 0x347967a9
- (id)_allowedClassesForSelector:(id)selector reply:(BOOL)reply;	// 0x34798301
- (id)_interfaceForArgument:(unsigned)argument ofSelector:(id)selector reply:(BOOL)reply;	// 0x34798475
- (id)_verifiedMethodSignatureForReplyBlockOfSelector:(id)selector;	// 0x34798281
- (id)_verifiedMethodSignatureForSelector:(id)selector;	// 0x34798225
- (Class)classForSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x34797cad
- (id)classesForSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x34797019
- (void)dealloc;	// 0x34796805
- (id)debugDescription;	// 0x34796851
- (id)interfaceForSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x3479798d
// declared property getter: - (id)protocol;	// 0x34796c61
- (id)replyBlockSignatureForSelector:(SEL)selector;	// 0x34798019
- (void)setClass:(Class)aClass forSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x34797c65
- (void)setClasses:(id)classes forSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x34796c71
- (void)setInterface:(id)interface forSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x347972bd
// declared property setter: - (void)setProtocol:(id)protocol;	// 0x34796b95
- (void)setReplyBlockSignature:(id)signature forSelector:(SEL)selector;	// 0x34797ce1
@end

