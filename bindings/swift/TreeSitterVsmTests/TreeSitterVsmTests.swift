import XCTest
import SwiftTreeSitter
import TreeSitterVsm

final class TreeSitterVsmTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_vsm())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Vsm grammar")
    }
}
