try {
  module.exports = require("./build/Release/tree_sitter_graphql");
} catch (error) {
  try {
    module.exports = require("./build/Debug/tree_sitter_graphql");
  } catch (_) {
    throw error
  }
}
