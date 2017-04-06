//
//  NSObject+BEKit.h
//  BEKit
//
//  Created by sundanlong on 16/4/11.
//
//

@import Foundation;

@interface NSObject (BEKit)

- (BOOL)be_isValid;

- (id _Nonnull)be_performSelector:(SEL _Nonnull)aSelector
                   withObjects:(id _Nullable)object, ... NS_REQUIRES_NIL_TERMINATION;

@end