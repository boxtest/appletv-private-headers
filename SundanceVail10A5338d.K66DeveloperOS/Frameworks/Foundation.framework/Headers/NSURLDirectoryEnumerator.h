/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDirectoryEnumerator.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
	CFURLEnumeratorRef _enumerator;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	BOOL shouldContinue;	// 12 = 0xc
}
@property(copy) id errorHandler;	// G=0x37375155; S=0x37355929; @synthesize=_errorHandler
- (id)initWithURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x3735584d
- (void)dealloc;	// 0x373559b5
- (id)directoryAttributes;	// 0x37375109
// declared property getter: - (id)errorHandler;	// 0x37375155
- (id)fileAttributes;	// 0x37375105
- (void)finalize;	// 0x37375111
- (unsigned)level;	// 0x373750f1
- (id)nextObject;	// 0x3735593d
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x37355929
- (void)skipDescendants;	// 0x373750dd
- (void)skipDescendents;	// 0x373750cd
@end

