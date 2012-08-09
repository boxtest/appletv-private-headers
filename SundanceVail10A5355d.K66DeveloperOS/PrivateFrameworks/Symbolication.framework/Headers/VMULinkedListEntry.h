/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import </libobjc.A.h>

@class VMUSymbolOwner;

@interface VMULinkedListEntry : __objc_empty_vtable {
	VMULinkedListEntry *_prev;	// 4 = 0x4
	VMULinkedListEntry *_next;	// 8 = 0x8
	unsigned _size;	// 12 = 0xc
	VMUSymbolOwner *_symbolOwner;	// 16 = 0x10
}
@property(retain) VMULinkedListEntry *next;	// G=0x34d7dd69; S=0x34d7dd89; converted property
@property(retain) VMULinkedListEntry *prev;	// G=0x34d7dd59; S=0x34d7dd79; converted property
@property(readonly, assign) unsigned size;	// G=0x34d7dd39; converted property
@property(readonly, retain) VMUSymbolOwner *symbolOwner;	// G=0x34d7dd49; converted property
+ (id)linkedListEntryWithSymbolOwner:(id)symbolOwner;	// 0x34d7dc89
- (id)initWithSymbolOwner:(id)symbolOwner;	// 0x34d7dcc5
- (void)dealloc;	// 0x34d7de29
- (id)description;	// 0x34d7dd99
// converted property getter: - (id)next;	// 0x34d7dd69
// converted property getter: - (id)prev;	// 0x34d7dd59
// converted property setter: - (void)setNext:(id)next;	// 0x34d7dd89
// converted property setter: - (void)setPrev:(id)prev;	// 0x34d7dd79
// converted property getter: - (unsigned)size;	// 0x34d7dd39
// converted property getter: - (id)symbolOwner;	// 0x34d7dd49
@end
