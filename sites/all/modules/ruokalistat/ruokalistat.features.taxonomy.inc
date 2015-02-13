<?php
/**
 * @file
 * ruokalistat.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ruokalistat_taxonomy_default_vocabularies() {
  return array(
    'erityisruokavaliomerkint_' => array(
      'name' => 'Erityisruokavaliomerkintä',
      'machine_name' => 'erityisruokavaliomerkint_',
      'description' => 'Erityisruokavaliomerkintä',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
