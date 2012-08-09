/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMediaProvider.h"
#import "BRMediaLoading.h"


__attribute__((visibility("hidden")))
@interface BRBaseMediaProvider : XXUnknownSuperclass <BRMediaProvider, BRMediaLoading> {
	int _providerStatus;	// 4 = 0x4
	BOOL _passwordProtected;	// 8 = 0x8
}
@property(assign) BOOL isPasswordProtected;	// G=0x35abd9; S=0x35abe9; converted property
@property(assign) int status;	// G=0x35aaa5; S=0x35aacd; converted property
+ (id)errorStateOfProvider:(id)provider;	// 0x35a7d5
+ (id)mediaProvider;	// 0x35a815
- (BOOL)autoload;	// 0x35abc1
- (long)countOfObjectsWithMediaType:(id)mediaType;	// 0x35ac11
- (void)dealloc;	// 0x35a851
- (int)errorCodeForProvider;	// 0x35aac9
- (void)flush;	// 0x35ac0d
// converted property getter: - (BOOL)isPasswordProtected;	// 0x35abd9
- (int)load;	// 0x35ab91
- (int)loadWithUsername:(id)username password:(id)password;	// 0x35aba1
- (id)mediaForEntityName:(id)entityName;	// 0x35a8dd
- (id)mediaTypes;	// 0x35a8c1
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors error:(id *)error;	// 0x35a8f9
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors excludeHiddenObjects:(BOOL)objects error:(id *)error;	// 0x35a929
- (id)providerID;	// 0x35a8ad
- (id)providerName;	// 0x35a8b1
- (void)reset;	// 0x35abc5
// converted property setter: - (void)setIsPasswordProtected:(BOOL)aProtected;	// 0x35abe9
// converted property setter: - (void)setStatus:(int)status;	// 0x35aacd
// converted property getter: - (int)status;	// 0x35aaa5
- (int)unload;	// 0x35abb1
@end
